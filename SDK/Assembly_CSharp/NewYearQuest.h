#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace Assembly_CSharp { struct TweenButton; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct NYMission; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct NewYearQuest : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::AudioSource* AS;
		UnityEngine_CoreModule::UnityEngine::Rect mainRect;
		UnityEngine_CoreModule::UnityEngine::Rect headerRect;
		UnityEngine_CoreModule::UnityEngine::Texture2D* background;
		UnityEngine_CoreModule::UnityEngine::Texture2D* missionBackground;
		UnityEngine_CoreModule::UnityEngine::Texture2D* header;
		UnityEngine_CoreModule::UnityEngine::Texture2D* reward;
		Assembly_CSharp::TweenButton* closeButton;
		Assembly_CSharp::TweenButton* HelpButton;
		Assembly_CSharp::TweenButton* SkinCircle;
		Assembly_CSharp::TweenButton* PlusIcon;
		Assembly_CSharp::TweenButton* Gifts;
		Assembly_CSharp::TweenButton* GetReward;
		int32_t selectedMission;
		UnityEngine_CoreModule::UnityEngine::Rect missionRect;
		bool missions_status;
		struct StaticFields
		{
			Assembly_CSharp::NewYearQuest* THIS__;
			int32_t currentMission;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::NYMission>* MissionsList;
			bool uploading_screenshot;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void ReloadMissionStat();
		void ShowQuest();
		void CloseQuest();
		void OnGUI();
		bool DrawBase(UnityEngine_CoreModule::UnityEngine::Vector2 mpos);
		mscorlib::System::Collections::IEnumerator* GetMissionStatus();
		mscorlib::System::Collections::IEnumerator* GetPassiveStatus();
		mscorlib::System::Collections::IEnumerator* GetMyReward();
		static void IncMissionTaskValueRuntime(int32_t mID, int32_t tID);
		void _ctor();
		static void _cctor();
	};
}

