#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "PERFORMANCE_STATUS.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct TweenButton; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct VDMissionTask; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace Assembly_CSharp
{
	struct VDMission : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::PERFORMANCE_STATUS MS;
		int32_t missionID;
		mscorlib::System::String* Header;
		Assembly_CSharp::TweenButton* inactive;
		Assembly_CSharp::TweenButton* inactiveCurrent;
		Assembly_CSharp::TweenButton* complited;
		UnityEngine_CoreModule::UnityEngine::Color mainColor;
		bool force_color;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::VDMissionTask>* TasksList;
		UnityEngine_CoreModule::UnityEngine::Color c;
		void _ctor(int32_t id, UnityEngine_CoreModule::UnityEngine::Vector2 _center, UnityEngine_CoreModule::UnityEngine::Color _mainColor, UnityEngine_AudioModule::UnityEngine::AudioSource* _AS, bool _finish, bool _force_color);
		bool DrawMissionPoint(UnityEngine_CoreModule::UnityEngine::Vector2 mpos, bool selected);
		void DrawMissionText(UnityEngine_CoreModule::UnityEngine::Rect _r);
		void SetStats(mscorlib::System::String* _stats);
		void DropButtonsSize();
	};
}

