#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_License.h"
#include "System_ComponentModel_LicFileLicenseProvider.h"
namespace System::System::ComponentModel { struct LicFileLicenseProvider; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct LicFileLicenseProvider_LicFileLicense : System::ComponentModel::License
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* key;
		void _ctor(System::ComponentModel::LicFileLicenseProvider* owner, mscorlib::System::String* key);
		mscorlib::System::String* get_LicenseKey();
		void Dispose();
	};
}

