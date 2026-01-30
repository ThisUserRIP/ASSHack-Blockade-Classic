#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Rewired_Core::Rewired::ComponentControls { struct IComponentController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct ComponentControl : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::IComponentController* _controller;
		bool sTsfFQGpiuTxwcGSyyoIFiyQkvDc;
		bool NMEOWbuiXgDVXrfWdeJzhLypkFg;
		int32_t _lastUpdateFrame;
		bool get_hasController();
		bool get_initialized();
		void _ctor();
		void ClearValue();
		void Rewired_ComponentControls_IComponentControl_Update();
		void Awake();
		void Start();
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void OnValidate();
		void OnCanvasGroupChanged();
		void OnTransformParentChanged();
		void OnDidApplyAnimationProperties();
		void Reset();
		void OnUpdate();
		bool OnInitialize();
		void zwyzAmvXsYDHgrEEgpUveUMDSUt();
		void OnSubscribeEvents();
		void OnUnsubscribeEvents();
		void OnSetProperty();
		void OnClear();
		void FindEventHandlers();
		bool UxhqmcUJuZQxMqHaIrRfoWCBcgJ();
		bool JQLvxyZxLrpqYYOiBFjYdKqwqqR();
		Rewired_Core::Rewired::ComponentControls::IComponentController* gdskyNxVXrXcuDglKTrvScmTgui();
		Rewired_Core::Rewired::ComponentControls::IComponentController* FindController();
		mscorlib::System::Type* GetRequiredControllerType();
		mscorlib::System::Collections::IEnumerator* xVysQVQqSqdMlFWXkhdTKMukTOwt();
		void cllfSxuDRQBfCCgnGGPMjahCwGdC();
		bool rzAFxecxYNoxNMMloXHyDHyQkGiZ(bool A_1, bool A_2);
		void wBrTiliAvAcGwpCaTcbWiYYrYyr();
		void aDrPNcHFaCEwIAlIiDkCeHXSoey();
	};
}

