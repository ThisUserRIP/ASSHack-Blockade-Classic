#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Rewired_Core::Rewired::Interfaces { struct IElementIdentifierTool; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Dev::Tools
{
	struct UnityJoystickElementIdentifier : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::IElementIdentifierTool* aNaCLEdLQvzvntZAAxMNhJjtKgv;
		void Awake();
		void Start();
		void Update();
		void OnDestroy();
		void _ctor();
	};
}

