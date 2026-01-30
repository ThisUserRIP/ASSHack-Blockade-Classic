#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_InputBehaviorWindow.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputBehaviorWindow; };
namespace Rewired_Core::Rewired { struct InputBehavior; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIControlSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_UI_ControlMapper_InputBehaviorWindow_PropertyType.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct InputBehaviorWindow_InputBehaviorInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputBehavior* _inputBehavior;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* _controlSet;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_PropertyType>* idToProperty;
		Rewired_Core::Rewired::InputBehavior* copyOfOriginal;
		Rewired_Core::Rewired::InputBehavior* get_inputBehavior();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* get_controlSet();
		void _ctor(Rewired_Core::Rewired::InputBehavior* inputBehavior, Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* controlSet, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_PropertyType>* idToProperty);
		void RestorePreviousData();
		void RestoreDefaultData();
		void RestoreData(Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_PropertyType propertyType, int32_t controlId);
		void RefreshControls();
	};
}

