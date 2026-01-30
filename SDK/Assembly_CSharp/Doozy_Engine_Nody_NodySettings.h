#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\UnityEngine_CoreModule\UnityEngine_HideFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Nody
{
	struct NodySettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float NormalOpacity;
		float ActiveOpacity;
		float HoverOpacity;
		float FooterHeight;
		float MaxNodeWidth;
		float MinNodeWidth;
		float NodeAccentLineHeight;
		float NodeAddSocketButtonSize;
		float NodeBodyOpacity;
		float NodeDeleteButtonSize;
		float NodeGlowOpacity;
		float NodeHeaderHeight;
		float NodeHeaderIconSize;
		float PingColorChangeSpeed;
		float SocketConnectedOpacity;
		float SocketCurveModifierMaxValue;
		float SocketCurveModifierMinValue;
		float SocketDividerHeight;
		float SocketDividerOpacity;
		float SocketHeight;
		float SocketNotConnectedOpacity;
		float SocketVerticalSpacing;
		float ConnectionPointHeight;
		float ConnectionPointOffsetFromLeftMargin;
		float ConnectionPointOffsetFromRightMargin;
		float ConnectionPointWidth;
		float CurvePointsMultiplier;
		float CurveStrengthModifier;
		float CurveWidth;
		float DefaultCurveModifier;
		float MaxCurveModifier;
		float MinCurveModifier;
		float GraphTabDividerWidth;
		float GraphTabElementSpacing;
		float GraphTabMaximumWidth;
		float GraphTabMinimumWidth;
		float GraphTabsAreaHeight;
		float GraphTabsBackgroundOpacity;
		double RepaintIntervalDuringPlayMode;
		double RepaintIntervalWhileIdle;
		mscorlib::System::String* EditorPrefsKeyWindowToolbar;
		mscorlib::System::String* EditorPrefsKeyDotAnimationSpeed;
		float DefaultNodeHeight;
		float DefaultNodeWidth;
		float EnterNodeWidth;
		float ExitNodeWidth;
		float StartNodeWidth;
		float SubGraphNodeWidth;
		float SwitchBackNodeWidth;
		UnityEngine_CoreModule::UnityEngine::HideFlags DefaultHideFlagsForNodes;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::Nody::NodySettings* s_instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::Nody::NodySettings* get_Instance();
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

