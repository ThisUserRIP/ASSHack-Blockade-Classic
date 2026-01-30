#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct TournamentsHistory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* tdate;
		int32_t ttype;
		int32_t tplace;
		int32_t texp;
		int32_t treward;
		void _ctor(int32_t _tdate, int32_t _ttype, int32_t _tplace, int32_t _texp, int32_t _treward);
		void Finalize();
		void DrawHistoryLine(int32_t x, int32_t y, bool gray);
	};
}

