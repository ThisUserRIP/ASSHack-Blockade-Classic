#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "xGnfhdIDCRLDgjIyJZBsyMlJUKE.h"
namespace Rewired_Windows { struct xGnfhdIDCRLDgjIyJZBsyMlJUKE; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace Rewired_Windows::Rewired::Libraries::SharpDX
{
	struct ResultDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE _Result_k__BackingField;
		mscorlib::System::String* _Module_k__BackingField;
		mscorlib::System::String* _NativeApiCode_k__BackingField;
		mscorlib::System::String* _ApiCode_k__BackingField;
		mscorlib::System::String* _Description_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::Object* LockDescriptor;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* RegisteredDescriptorProvider;
			mscorlib::System::Collections::Generic::Dictionary_2<Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE, Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor>* Descriptors;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE code, mscorlib::System::String* module, mscorlib::System::String* nativeApiCode, mscorlib::System::String* apiCode, mscorlib::System::String* description);
		Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE get_Result();
		void set_Result(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE value);
		mscorlib::System::String* get_Module();
		void set_Module(mscorlib::System::String* value);
		mscorlib::System::String* get_NativeApiCode();
		void set_NativeApiCode(mscorlib::System::String* value);
		mscorlib::System::String* get_ApiCode();
		void set_ApiCode(mscorlib::System::String* value);
		mscorlib::System::String* get_Description();
		void set_Description(mscorlib::System::String* value);
		bool Equals(Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor* other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		static Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor* Find(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE result);
		static void AddDescriptorsFromType(mscorlib::System::Type* type);
		static mscorlib::System::String* GetDescriptionFromResultCode(int32_t resultCode);
		static uint32_t FormatMessageW(int32_t dwFlags, intptr_t lpSource, int32_t dwMessageId, int32_t dwLanguageId, intptr_t& lpBuffer, int32_t nSize, intptr_t Arguments);
		static void _cctor();
	};
}

