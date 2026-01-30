#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc { struct Localize; };
namespace Assembly_CSharp::I2::Loc { struct ILocalizeTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct ILocalizeTargetDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Name;
		int32_t Priority;
		bool CanLocalize(Assembly_CSharp::I2::Loc::Localize* cmp);
		Assembly_CSharp::I2::Loc::ILocalizeTarget* CreateTarget(Assembly_CSharp::I2::Loc::Localize* cmp);
		mscorlib::System::Type* GetTargetType();
		void _ctor();
	};
}

