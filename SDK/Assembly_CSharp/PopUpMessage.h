#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "POPUP.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PopUpMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::POPUP msgID;
		mscorlib::System::String* bonus_text;
		int32_t param1;
		int32_t param2;
		int32_t param3;
		void _ctor(Assembly_CSharp::POPUP _msgID, mscorlib::System::String* _bt, int32_t _param1, int32_t _param2, int32_t _param3);
	};
}

