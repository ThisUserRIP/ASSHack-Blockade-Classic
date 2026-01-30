#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
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
	struct Vector3
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		float z;
		static UnityEngine_CoreModule::UnityEngine::Vector3 Slerp(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b, float t);
		static void OrthoNormalize2(UnityEngine_CoreModule::UnityEngine::Vector3& a, UnityEngine_CoreModule::UnityEngine::Vector3& b);
		static void OrthoNormalize(UnityEngine_CoreModule::UnityEngine::Vector3& normal, UnityEngine_CoreModule::UnityEngine::Vector3& tangent);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotateTowards(UnityEngine_CoreModule::UnityEngine::Vector3 current, UnityEngine_CoreModule::UnityEngine::Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Lerp(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b, float t);
		static UnityEngine_CoreModule::UnityEngine::Vector3 LerpUnclamped(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b, float t);
		static UnityEngine_CoreModule::UnityEngine::Vector3 MoveTowards(UnityEngine_CoreModule::UnityEngine::Vector3 current, UnityEngine_CoreModule::UnityEngine::Vector3 target, float maxDistanceDelta);
		static UnityEngine_CoreModule::UnityEngine::Vector3 SmoothDamp(UnityEngine_CoreModule::UnityEngine::Vector3 current, UnityEngine_CoreModule::UnityEngine::Vector3 target, UnityEngine_CoreModule::UnityEngine::Vector3& currentVelocity, float smoothTime);
		static UnityEngine_CoreModule::UnityEngine::Vector3 SmoothDamp(UnityEngine_CoreModule::UnityEngine::Vector3 current, UnityEngine_CoreModule::UnityEngine::Vector3 target, UnityEngine_CoreModule::UnityEngine::Vector3& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
		float get_Item(int32_t index);
		void set_Item(int32_t index, float value);
		void _ctor(float x, float y, float z);
		void _ctor(float x, float y);
		void Set(float newX, float newY, float newZ);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Scale(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		void Scale(UnityEngine_CoreModule::UnityEngine::Vector3 scale);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Cross(UnityEngine_CoreModule::UnityEngine::Vector3 lhs, UnityEngine_CoreModule::UnityEngine::Vector3 rhs);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Vector3 other);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Reflect(UnityEngine_CoreModule::UnityEngine::Vector3 inDirection, UnityEngine_CoreModule::UnityEngine::Vector3 inNormal);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Normalize(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void Normalize();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_normalized();
		static float Dot(UnityEngine_CoreModule::UnityEngine::Vector3 lhs, UnityEngine_CoreModule::UnityEngine::Vector3 rhs);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Project(UnityEngine_CoreModule::UnityEngine::Vector3 vector, UnityEngine_CoreModule::UnityEngine::Vector3 onNormal);
		static float Angle(UnityEngine_CoreModule::UnityEngine::Vector3 from, UnityEngine_CoreModule::UnityEngine::Vector3 to);
		static float Distance(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ClampMagnitude(UnityEngine_CoreModule::UnityEngine::Vector3 vector, float maxLength);
		static float Magnitude(UnityEngine_CoreModule::UnityEngine::Vector3 vector);
		float get_magnitude();
		static float SqrMagnitude(UnityEngine_CoreModule::UnityEngine::Vector3 vector);
		float get_sqrMagnitude();
		static UnityEngine_CoreModule::UnityEngine::Vector3 Min(UnityEngine_CoreModule::UnityEngine::Vector3 lhs, UnityEngine_CoreModule::UnityEngine::Vector3 rhs);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Max(UnityEngine_CoreModule::UnityEngine::Vector3 lhs, UnityEngine_CoreModule::UnityEngine::Vector3 rhs);
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_zero();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_one();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_forward();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_back();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_up();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_down();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_left();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_right();
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Addition(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Subtraction(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_UnaryNegation(UnityEngine_CoreModule::UnityEngine::Vector3 a);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Multiply(UnityEngine_CoreModule::UnityEngine::Vector3 a, float d);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Multiply(float d, UnityEngine_CoreModule::UnityEngine::Vector3 a);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Division(UnityEngine_CoreModule::UnityEngine::Vector3 a, float d);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Vector3 lhs, UnityEngine_CoreModule::UnityEngine::Vector3 rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Vector3 lhs, UnityEngine_CoreModule::UnityEngine::Vector3 rhs);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static void _cctor();
		static void Slerp_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& a, UnityEngine_CoreModule::UnityEngine::Vector3& b, float t, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void RotateTowards_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& current, UnityEngine_CoreModule::UnityEngine::Vector3& target, float maxRadiansDelta, float maxMagnitudeDelta, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
	};
	UnityEngine_CoreModule::UnityEngine::Vector3 operator+(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator-(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator-(UnityEngine_CoreModule::UnityEngine::Vector3 a);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator*(UnityEngine_CoreModule::UnityEngine::Vector3 a, float d);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator*(float d, UnityEngine_CoreModule::UnityEngine::Vector3 a);
	UnityEngine_CoreModule::UnityEngine::Vector3 operator/(UnityEngine_CoreModule::UnityEngine::Vector3 a, float d);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Vector3& lhs, UnityEngine_CoreModule::UnityEngine::Vector3& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Vector3& lhs, UnityEngine_CoreModule::UnityEngine::Vector3& rhs);
}

