#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Quaternion
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		float z;
		float w;
		static UnityEngine_CoreModule::UnityEngine::Quaternion FromToRotation(UnityEngine_CoreModule::UnityEngine::Vector3 fromDirection, UnityEngine_CoreModule::UnityEngine::Vector3 toDirection);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Inverse(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Slerp(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float t);
		static UnityEngine_CoreModule::UnityEngine::Quaternion SlerpUnclamped(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float t);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Lerp(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float t);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine_CoreModule::UnityEngine::Vector3 euler);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void Internal_ToAxisAngleRad(UnityEngine_CoreModule::UnityEngine::Quaternion q, UnityEngine_CoreModule::UnityEngine::Vector3& axis, float& angle);
		static UnityEngine_CoreModule::UnityEngine::Quaternion AngleAxis(float angle, UnityEngine_CoreModule::UnityEngine::Vector3 axis);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LookRotation(UnityEngine_CoreModule::UnityEngine::Vector3 forward, UnityEngine_CoreModule::UnityEngine::Vector3 upwards);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LookRotation(UnityEngine_CoreModule::UnityEngine::Vector3 forward);
		float get_Item(int32_t index);
		void _ctor(float x, float y, float z, float w);
		static UnityEngine_CoreModule::UnityEngine::Quaternion get_identity();
		static UnityEngine_CoreModule::UnityEngine::Quaternion op_Multiply(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Multiply(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		static bool IsEqualUsingDot(float dot);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs);
		static float Dot(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b);
		static float Angle(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Internal_MakePositive(UnityEngine_CoreModule::UnityEngine::Vector3 euler);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_eulerAngles();
		void set_eulerAngles(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Euler(float x, float y, float z);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Euler(UnityEngine_CoreModule::UnityEngine::Vector3 euler);
		void ToAngleAxis(float& angle, UnityEngine_CoreModule::UnityEngine::Vector3& axis);
		static UnityEngine_CoreModule::UnityEngine::Quaternion RotateTowards(UnityEngine_CoreModule::UnityEngine::Quaternion from, UnityEngine_CoreModule::UnityEngine::Quaternion to, float maxDegreesDelta);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Quaternion other);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static void _cctor();
		static void FromToRotation_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& fromDirection, UnityEngine_CoreModule::UnityEngine::Vector3& toDirection, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void Inverse_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& rotation, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void Slerp_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& a, UnityEngine_CoreModule::UnityEngine::Quaternion& b, float t, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void SlerpUnclamped_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& a, UnityEngine_CoreModule::UnityEngine::Quaternion& b, float t, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void Lerp_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& a, UnityEngine_CoreModule::UnityEngine::Quaternion& b, float t, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void Internal_FromEulerRad_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& euler, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void Internal_ToEulerRad_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& rotation, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void Internal_ToAxisAngleRad_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& q, UnityEngine_CoreModule::UnityEngine::Vector3& axis, float& angle);
		static void AngleAxis_Injected(float angle, UnityEngine_CoreModule::UnityEngine::Vector3& axis, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		static void LookRotation_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& forward, UnityEngine_CoreModule::UnityEngine::Vector3& upwards, UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
	};
	UnityEngine_CoreModule::UnityEngine::Quaternion operator*(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator*(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 point);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Quaternion& lhs, UnityEngine_CoreModule::UnityEngine::Quaternion& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Quaternion& lhs, UnityEngine_CoreModule::UnityEngine::Quaternion& rhs);
}

