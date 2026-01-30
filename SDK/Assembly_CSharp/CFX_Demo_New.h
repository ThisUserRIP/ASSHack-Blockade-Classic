#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct CFX_Demo_New : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Renderer* groundRenderer;
		UnityEngine_PhysicsModule::UnityEngine::Collider* groundCollider;
		UnityEngine_UI::UnityEngine::UI::Image* slowMoBtn;
		UnityEngine_UI::UnityEngine::UI::Text* slowMoLabel;
		UnityEngine_UI::UnityEngine::UI::Image* camRotBtn;
		UnityEngine_UI::UnityEngine::UI::Text* camRotLabel;
		UnityEngine_UI::UnityEngine::UI::Image* groundBtn;
		UnityEngine_UI::UnityEngine::UI::Text* groundLabel;
		UnityEngine_UI::UnityEngine::UI::Text* EffectLabel;
		UnityEngine_UI::UnityEngine::UI::Text* EffectIndexLabel;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* ParticleExamples;
		int32_t exampleIndex;
		bool slowMo;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultCamPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultCamRotation;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* onScreenParticles;
		void Awake();
		void Update();
		void OnToggleGround();
		void OnToggleCamera();
		void OnToggleSlowMo();
		void OnPreviousEffect();
		void OnNextEffect();
		void UpdateUI();
		UnityEngine_CoreModule::UnityEngine::GameObject* spawnParticle();
		mscorlib::System::Collections::IEnumerator* CheckForDeletedParticles();
		void prevParticle();
		void nextParticle();
		void destroyParticles();
		void _ctor();
	};
}

