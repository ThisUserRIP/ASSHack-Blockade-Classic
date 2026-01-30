#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct LicenseContext; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_ComponentModel_LicenseUsageMode.h"
namespace System::System::ComponentModel { struct LicenseProvider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System::System::ComponentModel { struct License; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel
{
	struct LicenseManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Object* selfLock;
			System::ComponentModel::LicenseContext* context;
			mscorlib::System::Object* contextLockHolder;
			mscorlib::System::Collections::Hashtable* providers;
			mscorlib::System::Collections::Hashtable* providerInstances;
			mscorlib::System::Object* internalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static System::ComponentModel::LicenseContext* get_CurrentContext();
		static void set_CurrentContext(System::ComponentModel::LicenseContext* value);
		static System::ComponentModel::LicenseUsageMode get_UsageMode();
		static void CacheProvider(mscorlib::System::Type* type, System::ComponentModel::LicenseProvider* provider);
		static mscorlib::System::Object* CreateWithContext(mscorlib::System::Type* type, System::ComponentModel::LicenseContext* creationContext);
		static mscorlib::System::Object* CreateWithContext(mscorlib::System::Type* type, System::ComponentModel::LicenseContext* creationContext, IL2CPP::Array<mscorlib::System::Object*>* args);
		static bool GetCachedNoLicenseProvider(mscorlib::System::Type* type);
		static System::ComponentModel::LicenseProvider* GetCachedProvider(mscorlib::System::Type* type);
		static System::ComponentModel::LicenseProvider* GetCachedProviderInstance(mscorlib::System::Type* providerType);
		static intptr_t GetLicenseInteropHelperType();
		static bool IsLicensed(mscorlib::System::Type* type);
		static bool IsValid(mscorlib::System::Type* type);
		static bool IsValid(mscorlib::System::Type* type, mscorlib::System::Object* instance, System::ComponentModel::License& license);
		static void LockContext(mscorlib::System::Object* contextUser);
		static void UnlockContext(mscorlib::System::Object* contextUser);
		static bool ValidateInternal(mscorlib::System::Type* type, mscorlib::System::Object* instance, bool allowExceptions, System::ComponentModel::License& license);
		static bool ValidateInternalRecursive(System::ComponentModel::LicenseContext* context, mscorlib::System::Type* type, mscorlib::System::Object* instance, bool allowExceptions, System::ComponentModel::License& license, mscorlib::System::String& licenseKey);
		static void Validate(mscorlib::System::Type* type);
		static System::ComponentModel::License* Validate(mscorlib::System::Type* type, mscorlib::System::Object* instance);
		static void _cctor();
	};
}

