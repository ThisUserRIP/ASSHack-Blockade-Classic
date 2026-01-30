#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlMapperDemoMessage : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper* controlMapper;
		UnityEngine_UI::UnityEngine::UI::Selectable* defaultSelectable;
		void Awake();
		void Start();
		void OnControlMapperClosed();
		void OnControlMapperOpened();
		void SelectDefault();
		mscorlib::System::Collections::IEnumerator* SelectDefaultDeferred();
		void _ctor();
	};
}

