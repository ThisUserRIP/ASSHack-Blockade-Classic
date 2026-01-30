#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct TournamentMemberData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t place;
		int32_t network;
		mscorlib::System::String* nickname;
		bool premium;
		int32_t exp;
		int32_t reward;
		void _ctor(int32_t _place, int32_t _network, mscorlib::System::String* _nickname, bool _premium, int32_t _exp, int32_t _reward);
		void Finalize();
		void DrawMemberData(int32_t x, int32_t y, bool my_place);
	};
}

