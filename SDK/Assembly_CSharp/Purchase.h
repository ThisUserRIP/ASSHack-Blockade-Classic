#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Purchase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t PID;
		int32_t PTime;
		int32_t PMoney;
		int32_t PCost;
		int32_t PItem;
		int32_t PStatus;
		bool PUpdating;
		void _ctor(int32_t _PID, int32_t _PTime, int32_t _PMoney, int32_t _PCost, int32_t _PItem, int32_t _PStatus);
	};
}

