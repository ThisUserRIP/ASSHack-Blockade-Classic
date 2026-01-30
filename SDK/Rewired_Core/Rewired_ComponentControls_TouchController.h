#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_CustomController.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchController : Rewired_Core::Rewired::ComponentControls::CustomController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _disableMouseInputWhenEnabled;
		bool _useCustomController;
		bool get_disableMouseInputWhenEnabled();
		void set_disableMouseInputWhenEnabled(bool value);
		bool get_useCustomController();
		void set_useCustomController(bool value);
		void _ctor();
		void OnDisable();
		bool OnInitialize();
		bool GetUseCustomController();
		void SetUseCustomController(bool value);
		void SetMouseState(bool state);
		void OnSetProperty();
		bool CheckIsRewiredReady();
	};
}

