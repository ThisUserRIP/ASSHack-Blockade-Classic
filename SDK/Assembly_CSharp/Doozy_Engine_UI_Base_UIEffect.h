#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_DynamicSorting.h"
#include "Doozy_Engine_UI_UIEffectBehavior.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleSystemStopBehavior.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleSystem_MainModule.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_MainModule; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::UI::Base
{
	struct UIEffect : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::DynamicSorting AutoSort;
		Assembly_CSharp::Doozy::Engine::UI::UIEffectBehavior Behavior;
		int32_t CustomSortingOrder;
		int32_t SortingSteps;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* ParticleSystem;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemStopBehavior StopBehavior;
		mscorlib::System::String* CustomSortingLayer;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Renderer*>* m_renderers;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::DynamicSorting DEFAULT_AUTO_SORT;
			Assembly_CSharp::Doozy::Engine::UI::UIEffectBehavior DEFAULT_BEHAVIOR;
			int32_t DEFAULT_SORTING_ORDER;
			int32_t DEFAULT_SORTING_STEPS;
			UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemStopBehavior DEFAULT_STOP_BEHAVIOR;
			mscorlib::System::String* DEFAULT_SORTING_LAYER;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MainModule get_MainModule();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Renderer*>* get_Renderers();
		mscorlib::System::String* get_SortingLayerName();
		int32_t get_SortingOrder();
		void _ctor();
		void Clear();
		void Emit(int32_t count);
		void Execute();
		void Execute(mscorlib::System::String* sortingLayer, int32_t sortingOrder);
		void OverrideSortingAndPlay(mscorlib::System::String* overrideSortingLayer, int32_t overrideSortingOrder);
		void Play(mscorlib::System::String* sortingLayer, int32_t sortingOrder);
		void Play();
		void Reset();
		bool SetSortingLayer(mscorlib::System::String* sortingLayerName);
		void SetSortingOrder(int32_t sortingOrder);
		void Stop();
		void Stop(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemStopBehavior stopBehavior);
		void UpdateSorting(mscorlib::System::String* sortingLayer, int32_t sortingOrder);
	};
}

