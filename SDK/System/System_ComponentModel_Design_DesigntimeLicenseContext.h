#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_LicenseContext.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_ComponentModel_LicenseUsageMode.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel::Design
{
	struct DesigntimeLicenseContext : System::ComponentModel::LicenseContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* savedLicenseKeys;
		System::ComponentModel::LicenseUsageMode get_UsageMode();
		mscorlib::System::String* GetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::Reflection::Assembly* resourceAssembly);
		void SetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::String* key);
		void _ctor();
	};
}

