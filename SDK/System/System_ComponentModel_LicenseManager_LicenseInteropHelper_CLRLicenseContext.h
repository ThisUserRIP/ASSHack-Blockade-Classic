#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_LicenseContext.h"
#include "System_ComponentModel_LicenseManager_LicenseInteropHelper.h"
namespace System::System::ComponentModel { struct LicenseManager_LicenseInteropHelper; };
#include "System_ComponentModel_LicenseUsageMode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct Assembly; };

namespace System::System::ComponentModel
{
	struct LicenseManager_LicenseInteropHelper_CLRLicenseContext : System::ComponentModel::LicenseContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::LicenseUsageMode usageMode;
		mscorlib::System::Type* type;
		mscorlib::System::String* key;
		void _ctor(System::ComponentModel::LicenseUsageMode usageMode, mscorlib::System::Type* type);
		System::ComponentModel::LicenseUsageMode get_UsageMode();
		mscorlib::System::String* GetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::Reflection::Assembly* resourceAssembly);
		void SetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::String* key);
	};
}

