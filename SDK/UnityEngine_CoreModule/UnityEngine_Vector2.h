#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Vector2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		float get_Item(int32_t index);
		void set_Item(int32_t index, float value);
		void _ctor(float x, float y);
		void Set(float newX, float newY);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Lerp(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b, float t);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Scale(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		void Normalize();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_normalized();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Vector2 other);
		static float Dot(UnityEngine_CoreModule::UnityEngine::Vector2 lhs, UnityEngine_CoreModule::UnityEngine::Vector2 rhs);
		float get_magnitude();
		float get_sqrMagnitude();
		static float Angle(UnityEngine_CoreModule::UnityEngine::Vector2 from, UnityEngine_CoreModule::UnityEngine::Vector2 to);
		static float Distance(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ClampMagnitude(UnityEngine_CoreModule::UnityEngine::Vector2 vector, float maxLength);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Addition(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Subtraction(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Multiply(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Division(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_UnaryNegation(UnityEngine_CoreModule::UnityEngine::Vector2 a);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Multiply(UnityEngine_CoreModule::UnityEngine::Vector2 a, float d);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Multiply(float d, UnityEngine_CoreModule::UnityEngine::Vector2 a);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Division(UnityEngine_CoreModule::UnityEngine::Vector2 a, float d);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Vector2 lhs, UnityEngine_CoreModule::UnityEngine::Vector2 rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Vector2 lhs, UnityEngine_CoreModule::UnityEngine::Vector2 rhs);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector3 v);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector2 v);
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_zero();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_one();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_up();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_down();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_right();
		static void _cctor();
	};
	UnityEngine_CoreModule::UnityEngine::Vector2 operator+(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator-(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator*(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator/(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator-(UnityEngine_CoreModule::UnityEngine::Vector2 a);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator*(UnityEngine_CoreModule::UnityEngine::Vector2 a, float d);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator*(float d, UnityEngine_CoreModule::UnityEngine::Vector2 a);
	UnityEngine_CoreModule::UnityEngine::Vector2 operator/(UnityEngine_CoreModule::UnityEngine::Vector2 a, float d);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Vector2& lhs, UnityEngine_CoreModule::UnityEngine::Vector2& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Vector2& lhs, UnityEngine_CoreModule::UnityEngine::Vector2& rhs);
}

