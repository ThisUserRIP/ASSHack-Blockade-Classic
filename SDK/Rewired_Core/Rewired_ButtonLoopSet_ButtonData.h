#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ButtonLoopSet.h"
namespace Rewired_Core::Rewired { struct ButtonLoopSet; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ButtonLoopSet_ButtonData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::UpdateLoopType updateLoop;
		IL2CPP::Array<bool>* values;
		IL2CPP::Array<bool>* wasTrueThisFrame;
		IL2CPP::Array<bool>* TBVYNXHcvMNlRQxlYUnXRGWfdvvd;
		int32_t GEqsHqUUSKOIVRGIXvTBXgqWvvL;
		IL2CPP::Array<bool>* zrWRmMUtUCEeOMyjFlyoCyRROOf;
		IL2CPP::Array<bool>* GxhEhlTJrcGvcHrggloUrphifLGR;
		IL2CPP::Array<bool>* get_effectiveValue();
		void _ctor(int32_t count, Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void SetValue(int32_t index, bool value);
		void ClearWasTrueThisFrame();
		void Clear();
		void Import(Rewired_Core::Rewired::ButtonLoopSet_ButtonData* source);
		void sWzBPoHGXlDFANovndbqkdJNhuGe();
	};
}

