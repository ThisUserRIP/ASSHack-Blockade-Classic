#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_LayoutGroup.h"
#include "UnityEngine_UI_GridLayoutGroup_Corner.h"
#include "UnityEngine_UI_GridLayoutGroup_Axis.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_UI_GridLayoutGroup_Constraint.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct GridLayoutGroup : UnityEngine_UI::UnityEngine::UI::LayoutGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Corner m_StartCorner;
		UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Axis m_StartAxis;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_CellSize;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Spacing;
		UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Constraint m_Constraint;
		int32_t m_ConstraintCount;
		UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Corner get_startCorner();
		void set_startCorner(UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Corner value);
		UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Axis get_startAxis();
		void set_startAxis(UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Axis value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_cellSize();
		void set_cellSize(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_spacing();
		void set_spacing(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Constraint get_constraint();
		void set_constraint(UnityEngine_UI::UnityEngine::UI::GridLayoutGroup_Constraint value);
		int32_t get_constraintCount();
		void set_constraintCount(int32_t value);
		void _ctor();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		void SetLayoutHorizontal();
		void SetLayoutVertical();
		void SetCellsAlongAxis(int32_t axis);
	};
}

