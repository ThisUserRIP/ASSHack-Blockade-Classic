#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawer; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerArrowAnimator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIDrawer* _Drawer_k__BackingField;
		float _Width_k__BackingField;
		float _Height_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::RectTransform* Rotator;
		UnityEngine_CoreModule::UnityEngine::RectTransform* LeftBar;
		UnityEngine_CoreModule::UnityEngine::RectTransform* RightBar;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		UnityEngine_UI::UnityEngine::UI::Image* m_leftBarImage;
		UnityEngine_UI::UnityEngine::UI::Image* m_rightBarImage;
		float m_velocity;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_rotatorCorners;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_drawerCorners;
		float m_rotatorDisableThreshold;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_tempCorners;
		UnityEngine_CoreModule::UnityEngine::Rect m_rotatorRect;
		struct StaticFields
		{
			float CLOSED_DRAWER_VELOCITY;
			float MAX_BAR_ROTATION;
			float ROTATION_SPEED;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::Doozy::Engine::UI::UIDrawer* get_Drawer();
		void set_Drawer(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_RectTransform();
		float get_Width();
		void set_Width(float value);
		float get_Height();
		void set_Height(float value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_Size();
		void Awake();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* AdjustCornersToIdentityRotation(UnityEngine_CoreModule::UnityEngine::RectTransform* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* corners);
		void SetTargetDrawer(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* drawer);
		void UpdateArrow();
		void UpdateArrowColor(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* drawer);
		void UpdateLocalScale(UnityEngine_CoreModule::UnityEngine::Vector3 scale);
		void UpdateLocalScale(float scale);
		void UpdateRotatorPosition(float visibility);
		void RotateAndMoveArrowToMatchDrawerDirection(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* drawer);
		void UpdateSize();
		void _ctor();
	};
}

