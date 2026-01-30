#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_CustomController.h"
namespace Rewired_Core::Rewired::ComponentControls { struct CustomController; };
#include "Rewired_ComponentControls_Data_CustomControllerElementSelector_ElementType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct CustomController_InputEvent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType;
		int32_t elementIndex;
		float value;
		void _ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType, int32_t elementIndex, float value);
		void _ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType, int32_t elementIndex, bool value);
		bool TargetMatches(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType, int32_t elementIndex);
		void Merge(float value);
		void Merge(bool value);
	};
}

