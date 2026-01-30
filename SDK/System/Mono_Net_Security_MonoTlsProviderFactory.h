#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { template <typename T1, typename T2> struct Tuple_2; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Net::Security
{
	struct MonoTlsProviderFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Object* locker;
			bool initialized;
			Mono_Security::Mono::Security::Interface::MonoTlsProvider* defaultProvider;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Tuple_2<mscorlib::System::Guid, mscorlib::System::String>>* providerRegistration;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Guid, Mono_Security::Mono::Security::Interface::MonoTlsProvider>* providerCache;
			mscorlib::System::Guid UnityTlsId;
			mscorlib::System::Guid AppleTlsId;
			mscorlib::System::Guid BtlsId;
			mscorlib::System::Guid LegacyId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Mono_Security::Mono::Security::Interface::MonoTlsProvider* GetProviderInternal();
		static void InitializeInternal();
		static Mono_Security::Mono::Security::Interface::MonoTlsProvider* LookupProvider(mscorlib::System::String* name, bool throwOnError);
		static void InitializeProviderRegistration();
		static Mono_Security::Mono::Security::Interface::MonoTlsProvider* CreateDefaultProviderImpl();
		static Mono_Security::Mono::Security::Interface::MonoTlsProvider* GetProvider();
		static void _cctor();
	};
}

