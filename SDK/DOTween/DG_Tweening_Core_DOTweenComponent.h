#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening { struct IDOTweenInit; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace DOTween::DG::Tweening { struct Tween; };

namespace DOTween::DG::Tweening::Core
{
	struct DOTweenComponent : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t inspectorUpdater;
		float _unscaledTime;
		float _unscaledDeltaTime;
		bool _paused;
		float _pausedTime;
		bool _duplicateToDestroy;
		void Awake();
		void Start();
		void Update();
		void LateUpdate();
		void FixedUpdate();
		void OnDrawGizmos();
		void OnDestroy();
		void OnApplicationPause(bool pauseStatus);
		DOTween::DG::Tweening::IDOTweenInit* SetCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity);
		mscorlib::System::Collections::IEnumerator* WaitForCompletion(DOTween::DG::Tweening::Tween* t);
		mscorlib::System::Collections::IEnumerator* WaitForRewind(DOTween::DG::Tweening::Tween* t);
		mscorlib::System::Collections::IEnumerator* WaitForKill(DOTween::DG::Tweening::Tween* t);
		mscorlib::System::Collections::IEnumerator* WaitForElapsedLoops(DOTween::DG::Tweening::Tween* t, int32_t elapsedLoops);
		mscorlib::System::Collections::IEnumerator* WaitForPosition(DOTween::DG::Tweening::Tween* t, float position);
		mscorlib::System::Collections::IEnumerator* WaitForStart(DOTween::DG::Tweening::Tween* t);
		static void Create();
		static void DestroyInstance();
		void _ctor();
	};
}

