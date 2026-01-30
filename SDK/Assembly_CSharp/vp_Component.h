#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct vp_StateManager; };
namespace Assembly_CSharp { struct vp_EventHandler; };
namespace Assembly_CSharp { struct vp_State; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct vp_ComponentPreset; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };

namespace Assembly_CSharp
{
	struct vp_Component : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Persist;
		Assembly_CSharp::vp_StateManager* m_StateManager;
		Assembly_CSharp::vp_EventHandler* EventHandler;
		Assembly_CSharp::vp_State* m_DefaultState;
		bool m_Initialized;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Parent;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Root;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_State>* States;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Component>* Children;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Component>* Siblings;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Component>* Family;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Renderer>* Renderers;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_AudioModule::UnityEngine::AudioSource>* AudioSources;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		Assembly_CSharp::vp_Timer_Handle* m_DeactivationTimer;
		Assembly_CSharp::vp_StateManager* get_StateManager();
		Assembly_CSharp::vp_State* get_DefaultState();
		float get_Delta();
		float get_SDelta();
		UnityEngine_CoreModule::UnityEngine::Transform* get_Transform();
		UnityEngine_CoreModule::UnityEngine::Transform* get_Parent();
		UnityEngine_CoreModule::UnityEngine::Transform* get_Root();
		UnityEngine_AudioModule::UnityEngine::AudioSource* get_Audio();
		bool get_Rendering();
		void set_Rendering(bool value);
		void Awake();
		void Start();
		void Init();
		void OnEnable();
		void OnDisable();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void SetState(mscorlib::System::String* state, bool enabled, bool recursive, bool includeDisabled);
		void ActivateGameObject(bool setActive);
		void ResetState();
		bool StateEnabled(mscorlib::System::String* stateName);
		void RefreshDefaultState();
		void ApplyPreset(Assembly_CSharp::vp_ComponentPreset* preset);
		Assembly_CSharp::vp_ComponentPreset* Load(mscorlib::System::String* path);
		Assembly_CSharp::vp_ComponentPreset* Load(UnityEngine_CoreModule::UnityEngine::TextAsset* asset);
		void CacheChildren();
		void CacheSiblings();
		void CacheFamily();
		void CacheRenderers();
		void CacheAudioSources();
		void Activate();
		void Deactivate();
		void DeactivateWhenSilent();
		void Refresh();
		void _ctor();
		void _DeactivateWhenSilent_b__58_0();
	};
}

