#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Transform.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform_ReapplyDrivenProperties; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_RectTransform_Axis.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RectTransform : UnityEngine_CoreModule::UnityEngine::Transform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::RectTransform_ReapplyDrivenProperties* reapplyDrivenProperties;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void add_reapplyDrivenProperties(UnityEngine_CoreModule::UnityEngine::RectTransform_ReapplyDrivenProperties* value);
		static void remove_reapplyDrivenProperties(UnityEngine_CoreModule::UnityEngine::RectTransform_ReapplyDrivenProperties* value);
		UnityEngine_CoreModule::UnityEngine::Rect get_rect();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_anchorMin();
		void set_anchorMin(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_anchorMax();
		void set_anchorMax(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_anchoredPosition();
		void set_anchoredPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_sizeDelta();
		void set_sizeDelta(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_pivot();
		void set_pivot(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_anchoredPosition3D();
		void set_anchoredPosition3D(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_offsetMin();
		void set_offsetMin(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_offsetMax();
		void set_offsetMax(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void GetLocalCorners(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* fourCornersArray);
		void GetWorldCorners(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* fourCornersArray);
		void SetSizeWithCurrentAnchors(UnityEngine_CoreModule::UnityEngine::RectTransform_Axis axis, float size);
		static void SendReapplyDrivenProperties(UnityEngine_CoreModule::UnityEngine::RectTransform* driven);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetParentSize();
		void get_rect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void get_anchorMin_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_anchorMin_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void get_anchorMax_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_anchorMax_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void get_anchoredPosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_anchoredPosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void get_sizeDelta_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_sizeDelta_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void get_pivot_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_pivot_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
	};
}

