#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Component.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Space.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Transform : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_localPosition();
		void set_localPosition(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_eulerAngles();
		void set_eulerAngles(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_localEulerAngles();
		void set_localEulerAngles(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_right();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_up();
		void set_up(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_forward();
		void set_forward(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_rotation();
		void set_rotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_localRotation();
		void set_localRotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_localScale();
		void set_localScale(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_parent();
		void set_parent(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_parentInternal();
		void set_parentInternal(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* GetParent();
		void SetParent(UnityEngine_CoreModule::UnityEngine::Transform* p);
		void SetParent(UnityEngine_CoreModule::UnityEngine::Transform* parent, bool worldPositionStays);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_worldToLocalMatrix();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_localToWorldMatrix();
		void Translate(UnityEngine_CoreModule::UnityEngine::Vector3 translation, UnityEngine_CoreModule::UnityEngine::Space relativeTo);
		void Translate(UnityEngine_CoreModule::UnityEngine::Vector3 translation);
		void Translate(float x, float y, float z);
		void Rotate(UnityEngine_CoreModule::UnityEngine::Vector3 eulers, UnityEngine_CoreModule::UnityEngine::Space relativeTo);
		void Rotate(UnityEngine_CoreModule::UnityEngine::Vector3 eulers);
		void Rotate(float xAngle, float yAngle, float zAngle);
		void RotateAroundInternal(UnityEngine_CoreModule::UnityEngine::Vector3 axis, float angle);
		void Rotate(UnityEngine_CoreModule::UnityEngine::Vector3 axis, float angle, UnityEngine_CoreModule::UnityEngine::Space relativeTo);
		void Rotate(UnityEngine_CoreModule::UnityEngine::Vector3 axis, float angle);
		void RotateAround(UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Vector3 axis, float angle);
		void LookAt(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 worldUp);
		void LookAt(UnityEngine_CoreModule::UnityEngine::Transform* target);
		void LookAt(UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition, UnityEngine_CoreModule::UnityEngine::Vector3 worldUp);
		void LookAt(UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition);
		void Internal_LookAt(UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition, UnityEngine_CoreModule::UnityEngine::Vector3 worldUp);
		UnityEngine_CoreModule::UnityEngine::Vector3 TransformDirection(UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		UnityEngine_CoreModule::UnityEngine::Vector3 InverseTransformDirection(UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		UnityEngine_CoreModule::UnityEngine::Vector3 InverseTransformVector(UnityEngine_CoreModule::UnityEngine::Vector3 vector);
		UnityEngine_CoreModule::UnityEngine::Vector3 TransformPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Vector3 TransformPoint(float x, float y, float z);
		UnityEngine_CoreModule::UnityEngine::Vector3 InverseTransformPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Transform* get_root();
		UnityEngine_CoreModule::UnityEngine::Transform* GetRoot();
		int32_t get_childCount();
		void SetAsFirstSibling();
		void SetAsLastSibling();
		void SetSiblingIndex(int32_t index);
		int32_t GetSiblingIndex();
		static UnityEngine_CoreModule::UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::String* path, bool isActiveOnly);
		UnityEngine_CoreModule::UnityEngine::Transform* Find(mscorlib::System::String* n);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_lossyScale();
		bool IsChildOf(UnityEngine_CoreModule::UnityEngine::Transform* parent);
		void set_hasChanged(bool value);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		void RotateAroundLocal(UnityEngine_CoreModule::UnityEngine::Vector3 axis, float angle);
		UnityEngine_CoreModule::UnityEngine::Transform* GetChild(int32_t index);
		void get_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void get_localPosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_localPosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void get_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		void set_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& value);
		void get_localRotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		void set_localRotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& value);
		void get_localScale_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_localScale_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void get_worldToLocalMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		void get_localToWorldMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		void RotateAroundInternal_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& axis, float angle);
		void Internal_LookAt_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& worldPosition, UnityEngine_CoreModule::UnityEngine::Vector3& worldUp);
		void TransformDirection_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& direction, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void InverseTransformDirection_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& direction, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void InverseTransformVector_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& vector, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void TransformPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void InverseTransformPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void get_lossyScale_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void RotateAroundLocal_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& axis, float angle);
	};
}

