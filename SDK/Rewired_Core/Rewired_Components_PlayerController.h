#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "Rewired_Components_ComponentWrapper_1.h"
namespace Rewired_Core::Rewired { struct InputManager_Base; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Components { struct PlayerController_ElementInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Components { struct PlayerController_ButtonStateChangedHandler; };
namespace Rewired_Core::Rewired::Components { struct PlayerController_AxisValueChangedHandler; };
namespace Rewired_Core::Rewired::Components { struct PlayerController_EnabledStateChangedHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Button; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core::Rewired { struct PlayerController_Axis; };
namespace Rewired_Core::Rewired { struct PlayerController_Element; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Components
{
	struct PlayerController : Rewired_Core::Rewired::Components::ComponentWrapper_1<Rewired_Core::Rewired::PlayerController>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputManager_Base* _rewiredInputManager;
		int32_t _playerId;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerController_ElementInfo>* _elements;
		Rewired_Core::Rewired::Components::PlayerController_ButtonStateChangedHandler* _onButtonStateChanged;
		Rewired_Core::Rewired::Components::PlayerController_AxisValueChangedHandler* _onAxisValueChanged;
		Rewired_Core::Rewired::Components::PlayerController_EnabledStateChangedHandler* _onEnabledStateChanged;
		int32_t get_playerId();
		void set_playerId(int32_t value);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::PlayerController_Button>* get_buttons();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::PlayerController_Axis>* get_axes();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::PlayerController_Element>* get_elements();
		int32_t get_buttonCount();
		int32_t get_axisCount();
		int32_t get_elementCount();
		void add_ButtonStateChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Boolean>* value);
		void remove_ButtonStateChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Boolean>* value);
		void add_AxisValueChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* value);
		void remove_AxisValueChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* value);
		void add_EnabledStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void remove_EnabledStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		bool GetButton(int32_t index);
		bool GetButtonDown(int32_t index);
		bool GetButtonUp(int32_t index);
		float GetAxis(int32_t index);
		float GetAxisRaw(int32_t index);
		Rewired_Core::Rewired::PlayerController_Element* GetElement(int32_t index);
		template <typename T> T* GetElement(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void OnAwake();
		void OnAwakeFinished();
		void OnEnabled();
		void OnDisabled();
		void OnValidated();
		void OnReset();
		void Subscribe();
		void Unsubscribe();
		mscorlib::System::Object* GetCreateSourceArgs();
		Rewired_Core::Rewired::PlayerController* CreateSource(mscorlib::System::Object* args);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerController_ElementInfo>* CreateDefaultElementInfos();
		void DUZcQmjEWycLuJdktVAKbtncvGf(int32_t A_1, bool A_2);
		void amvYeGPThRzMuhcNnenlvdtnxCR(int32_t A_1, float A_2);
		void JzfXVvvXwhkHPQwvxJgVXFFleSQ(bool A_1);
		void vAJPQNfgZyFQoAQcQaIwYtGgPyK();
		void _ctor();
		bool Rewired_IPlayerController_get_enabled();
		void Rewired_IPlayerController_set_enabled(bool A_1);
	};
}

