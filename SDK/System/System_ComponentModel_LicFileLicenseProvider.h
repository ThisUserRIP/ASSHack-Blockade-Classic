#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_LicenseProvider.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct License; };
namespace System::System::ComponentModel { struct LicenseContext; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct LicFileLicenseProvider : System::ComponentModel::LicenseProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsKeyValid(mscorlib::System::String* key, mscorlib::System::Type* type);
		mscorlib::System::String* GetKey(mscorlib::System::Type* type);
		System::ComponentModel::License* GetLicense(System::ComponentModel::LicenseContext* context, mscorlib::System::Type* type, mscorlib::System::Object* instance, bool allowExceptions);
		void _ctor();
	};
}

