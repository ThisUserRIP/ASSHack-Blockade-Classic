#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct SeasonLvl; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct SeasonWeek; };
namespace Assembly_CSharp { struct NYMission; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp
{
	struct SeasonManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 mpos;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector2;
		float x_pos;
		float sw;
		int32_t selectedLvl;
		UnityEngine_CoreModule::UnityEngine::Rect missionRect;
		bool justOpened;
		struct StaticFields
		{
			int32_t SeasonID;
			int32_t MyLVL;
			int32_t MyPoints;
			int32_t MyStepPoints;
			bool MySeason;
			int32_t SeasonTimer;
			int32_t WeeksCount;
			int32_t CurrentWeek;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::SeasonLvl>* seasonLvls;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::SeasonWeek>* seasonWeeks;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::NYMission>* MissionsList;
			int32_t currentMission;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void OnGUI();
		void Update();
		static void OnRecvSeasonReward(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void _ctor();
		static void _cctor();
	};
}

