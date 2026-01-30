#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::ComponentControls { struct IComponentControl; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct ComponentController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool sTsfFQGpiuTxwcGSyyoIFiyQkvDc;
		bool NMEOWbuiXgDVXrfWdeJzhLypkFg;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ComponentControls::IComponentControl>* _controls;
		bool get_initialized();
		void _ctor();
		void Awake();
		void Update();
		void OnEnable();
		void OnDisable();
		void OnValidate();
		void OnDestroy();
		bool OnInitialize();
		void OnSubscribeEvents();
		void OnUnsubscribeEvents();
		void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_IComponentControl__Register(Rewired_Core::Rewired::ComponentControls::IComponentControl* A_1);
		void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_IComponentControl__Deregister(Rewired_Core::Rewired::ComponentControls::IComponentControl* A_1);
		void ClearControlValues();
		void cllfSxuDRQBfCCgnGGPMjahCwGdC();
		void FEXQmcgsIVfvGMLuLGRXIjWjIctl();
		mscorlib::System::Collections::IEnumerator* pQhGXVdbUeCljHqzMaDVdvKotKIl();
	};
}

