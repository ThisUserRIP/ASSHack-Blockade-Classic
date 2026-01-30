#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_LocalizationManager.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager; };
namespace Assembly_CSharp::I2::Loc { struct ILocalizeTargetDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationManager___c__DisplayClass69_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::ILocalizeTargetDescriptor* desc;
		void _ctor();
		bool _RegisterTarget_b__0(Assembly_CSharp::I2::Loc::ILocalizeTargetDescriptor* x);
	};
}

