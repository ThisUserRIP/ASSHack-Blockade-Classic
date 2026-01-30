#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening::Core { struct DOTweenSettings_SafeModeOptions; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "DG_Tweening_Core_Enums_RewindCallbackMode.h"
#include "DG_Tweening_LogBehaviour.h"
#include "DG_Tweening_AutoPlay.h"
#include "DG_Tweening_UpdateType.h"
#include "DG_Tweening_Ease.h"
#include "DG_Tweening_LoopType.h"
#include "DG_Tweening_Core_DOTweenSettings_SettingsLocation.h"
namespace DOTween::DG::Tweening::Core { struct DOTweenSettings_ModulesSetup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Core
{
	struct DOTweenSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useSafeMode;
		DOTween::DG::Tweening::Core::DOTweenSettings_SafeModeOptions* safeModeOptions;
		float timeScale;
		bool useSmoothDeltaTime;
		float maxSmoothUnscaledTime;
		DOTween::DG::Tweening::Core::Enums::RewindCallbackMode rewindCallbackMode;
		bool showUnityEditorReport;
		DOTween::DG::Tweening::LogBehaviour logBehaviour;
		bool drawGizmos;
		bool defaultRecyclable;
		DOTween::DG::Tweening::AutoPlay defaultAutoPlay;
		DOTween::DG::Tweening::UpdateType defaultUpdateType;
		bool defaultTimeScaleIndependent;
		DOTween::DG::Tweening::Ease defaultEaseType;
		float defaultEaseOvershootOrAmplitude;
		float defaultEasePeriod;
		bool defaultAutoKill;
		DOTween::DG::Tweening::LoopType defaultLoopType;
		bool debugMode;
		bool debugStoreTargetId;
		bool showPreviewPanel;
		DOTween::DG::Tweening::Core::DOTweenSettings_SettingsLocation storeSettingsLocation;
		DOTween::DG::Tweening::Core::DOTweenSettings_ModulesSetup* modules;
		bool showPlayingTweens;
		bool showPausedTweens;
		struct StaticFields
		{
			mscorlib::System::String* AssetName;
			mscorlib::System::String* AssetFullFilename;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

