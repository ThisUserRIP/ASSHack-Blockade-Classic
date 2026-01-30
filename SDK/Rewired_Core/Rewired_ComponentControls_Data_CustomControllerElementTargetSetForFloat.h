#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_Data_CustomControllerElementTargetSet.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::ComponentControls::Data
{
	struct CustomControllerElementTargetSetForFloat : Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _splitValue;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* _target;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* _positiveTarget;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* _negativeTarget;
		bool get_splitValue();
		void set_splitValue(bool value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_target();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_positiveTarget();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_negativeTarget();
		int32_t get_targetCount();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_Item(int32_t index);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* target);
		void _ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* positiveTarget, Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* negativeTarget);
		void ClearElementCaches();
	};
}

