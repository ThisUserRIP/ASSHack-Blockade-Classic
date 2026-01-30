#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Messages.h"
namespace Assembly_CSharp { struct Messages; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Messages_CMsg : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* text;
		float time;
		int32_t msgID;
		int32_t param;
		void _ctor(mscorlib::System::String* _text, float _time);
		void _ctor(mscorlib::System::String* _text, float _time, float _duration);
		void _ctor(int32_t _msgID, int32_t _param, float _time);
		void Finalize();
	};
}

