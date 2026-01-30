#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct ButtonLoopSet_ButtonData; };
#include "Rewired_UpdateLoopDataSet_1.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Config_UpdateLoopSetting.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Rewired_Core::Rewired
{
	struct ButtonLoopSet : Rewired_Core::Rewired::UpdateLoopDataSet_1<Rewired_Core::Rewired::ButtonLoopSet_ButtonData>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t buttonCount;
		void _ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoops, int32_t buttonCount);
		void SetValue(int32_t index, bool value, double timestamp);
		void Clear();
		void Import(Rewired_Core::Rewired::ButtonLoopSet* set);
	};
}

