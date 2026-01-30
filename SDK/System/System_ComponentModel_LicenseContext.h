#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_LicenseUsageMode.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct LicenseContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::LicenseUsageMode get_UsageMode();
		mscorlib::System::String* GetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::Reflection::Assembly* resourceAssembly);
		mscorlib::System::Object* GetService(mscorlib::System::Type* type);
		void SetSavedLicenseKey(mscorlib::System::Type* type, mscorlib::System::String* key);
		void _ctor();
	};
}

