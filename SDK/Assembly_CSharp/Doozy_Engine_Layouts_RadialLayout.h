#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_UI_LayoutGroup.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Layouts
{
	struct RadialLayout : UnityEngine_UI::UnityEngine::UI::LayoutGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_AutoRebuild;
		float m_ChildHeight;
		float m_ChildRotation;
		float m_ChildWidth;
		bool m_Clockwise;
		bool m_ControlChildHeight;
		bool m_ControlChildWidth;
		float m_MaxAngle;
		float m_MaxRadius;
		float m_MinAngle;
		float m_Radius;
		bool m_RadiusControlsHeight;
		bool m_RadiusControlsWidth;
		float m_RadiusHeightFactor;
		float m_RadiusWidthFactor;
		bool m_RotateChildren;
		float m_Spacing;
		float m_StartAngle;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::RectTransform>* m_childList;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		struct StaticFields
		{
			bool AUTO_REBUILD_DEFAULT_VALUE;
			bool CLOCKWISE_DEFAULT_VALUE;
			bool CONTROL_CHILD_HEIGHT_DEFAULT_VALUE;
			bool CONTROL_CHILD_WIDTH_DEFAULT_VALUE;
			bool RADIUS_CONTROLS_HEIGHT_DEFAULT_VALUE;
			bool RADIUS_CONTROLS_WIDTH_DEFAULT_VALUE;
			bool ROTATE_CHILDREN_DEFAULT_VALUE;
			float CHILD_HEIGHT_DEFAULT_VALUE;
			float CHILD_ROTATION_DEFAULT_VALUE;
			float CHILD_WIDTH_DEFAULT_VALUE;
			float MAX_ANGLE;
			float MAX_ANGLE_DEFAULT_VALUE;
			float MAX_RADIUS_DEFAULT_VALUE;
			float MIN_ANGLE;
			float MIN_ANGLE_DEFAULT_VALUE;
			float RADIUS_DEFAULT_VALUE;
			float RADIUS_HEIGHT_FACTOR_DEFAULT_VALUE;
			float RADIUS_WIDTH_FACTOR_DEFAULT_VALUE;
			float SPACING_DEFAULT_VALUE;
			float START_ANGLE_DEFAULT_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_AutoRebuild();
		void set_AutoRebuild(bool value);
		float get_ChildHeight();
		void set_ChildHeight(float value);
		float get_ChildRotation();
		void set_ChildRotation(float value);
		float get_ChildWidth();
		void set_ChildWidth(float value);
		bool get_Clockwise();
		void set_Clockwise(bool value);
		bool get_ControlChildHeight();
		void set_ControlChildHeight(bool value);
		bool get_ControlChildWidth();
		void set_ControlChildWidth(bool value);
		float get_MaxAngle();
		void set_MaxAngle(float value);
		float get_MinAngle();
		void set_MinAngle(float value);
		float get_Radius();
		void set_Radius(float value);
		bool get_RadiusControlsHeight();
		void set_RadiusControlsHeight(bool value);
		bool get_RadiusControlsWidth();
		void set_RadiusControlsWidth(bool value);
		float get_RadiusHeightFactor();
		void set_RadiusHeightFactor(float value);
		float get_RadiusWidthFactor();
		void set_RadiusWidthFactor(float value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_RectTransform();
		bool get_RotateChildren();
		void set_RotateChildren(bool value);
		float get_Spacing();
		void set_Spacing(float value);
		float get_StartAngle();
		void set_StartAngle(float value);
		void OnEnable();
		void SetLayoutHorizontal();
		void SetLayoutVertical();
		void CalculateLayoutInputVertical();
		void CalculateLayoutInputHorizontal();
		void CalculateRadial();
		void OnValueChanged();
		void _ctor();
	};
}

