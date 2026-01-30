#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::I2::Loc { struct LocalizeTarget_UnityStandard_Prefab; };
#include "I2_Loc_LocalizeTargetDesc_1.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc { struct Localize; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizeTargetDesc_Prefab : Assembly_CSharp::I2::Loc::LocalizeTargetDesc_1<Assembly_CSharp::I2::Loc::LocalizeTarget_UnityStandard_Prefab>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool CanLocalize(Assembly_CSharp::I2::Loc::Localize* cmp);
		void _ctor();
	};
}

