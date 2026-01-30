#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UnknownControllerHat.h"
namespace Rewired_Core::Rewired { struct UnknownControllerHat; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct UnknownControllerHat_HatButtons : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* vzrcRdWeinkMksxkFixnbINFgcW;
		int32_t get_Item(int32_t index);
		void _ctor(IL2CPP::Array<int32_t>* buttons);
		void GetNeighbors(int32_t button, int32_t& neighbor1, int32_t& neighbor2);
		bool IsCardinal(int32_t button);
		bool IsCorner(int32_t button);
		int32_t IndexOf(int32_t button);
		bool Contains(int32_t button);
	};
}

