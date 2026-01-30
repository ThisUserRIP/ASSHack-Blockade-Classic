#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementSelector; };
#include "Rewired_ComponentControls_Data_CustomControllerElementTarget_ValueRange.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls::Data
{
	struct CustomControllerElementTarget : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* _element;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange _valueRange;
		Rewired_Core::Rewired::Pole _valueContribution;
		bool _invert;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* get_element();
		Rewired_Core::Rewired::Pole get_valueContribution();
		void set_valueContribution(Rewired_Core::Rewired::Pole value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange get_valueRange();
		void set_valueRange(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange value);
		bool get_invert();
		void set_invert(bool value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* selector);
		void ClearElementCaches();
	};
}

