#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct BaseMeshEffect : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Graphic* m_Graphic;
		UnityEngine_UI::UnityEngine::UI::Graphic* get_graphic();
		void OnEnable();
		void OnDisable();
		void OnDidApplyAnimationProperties();
		void ModifyMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void ModifyMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* vh);
		void _ctor();
	};
}

