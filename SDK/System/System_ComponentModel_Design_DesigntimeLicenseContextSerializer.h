#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel::Design { struct RuntimeLicenseContext; };

namespace System::System::ComponentModel::Design
{
	struct DesigntimeLicenseContextSerializer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Deserialize(mscorlib::System::IO::Stream* o, mscorlib::System::String* cryptoKey, System::ComponentModel::Design::RuntimeLicenseContext* context);
	};
}

