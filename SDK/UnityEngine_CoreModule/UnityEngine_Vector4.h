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
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Vector4
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		float z;
		float w;
		float get_Item(int32_t index);
		void set_Item(int32_t index, float value);
		void _ctor(float x, float y, float z, float w);
		void _ctor(float x, float y);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Vector4 other);
		static float Dot(UnityEngine_CoreModule::UnityEngine::Vector4 a, UnityEngine_CoreModule::UnityEngine::Vector4 b);
		float get_magnitude();
		float get_sqrMagnitude();
		static UnityEngine_CoreModule::UnityEngine::Vector4 get_zero();
		static UnityEngine_CoreModule::UnityEngine::Vector4 get_one();
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Addition(UnityEngine_CoreModule::UnityEngine::Vector4 a, UnityEngine_CoreModule::UnityEngine::Vector4 b);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Subtraction(UnityEngine_CoreModule::UnityEngine::Vector4 a, UnityEngine_CoreModule::UnityEngine::Vector4 b);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_UnaryNegation(UnityEngine_CoreModule::UnityEngine::Vector4 a);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Multiply(UnityEngine_CoreModule::UnityEngine::Vector4 a, float d);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Multiply(float d, UnityEngine_CoreModule::UnityEngine::Vector4 a);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Division(UnityEngine_CoreModule::UnityEngine::Vector4 a, float d);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Vector4 lhs, UnityEngine_CoreModule::UnityEngine::Vector4 rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Vector4 lhs, UnityEngine_CoreModule::UnityEngine::Vector4 rhs);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector3 v);
		static UnityEngine_CoreModule::UnityEngine::Vector3 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector4 v);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector2 v);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static void _cctor();
	};
	UnityEngine_CoreModule::UnityEngine::Vector4 operator+(UnityEngine_CoreModule::UnityEngine::Vector4 a, UnityEngine_CoreModule::UnityEngine::Vector4 b);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator-(UnityEngine_CoreModule::UnityEngine::Vector4 a, UnityEngine_CoreModule::UnityEngine::Vector4 b);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator-(UnityEngine_CoreModule::UnityEngine::Vector4 a);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator*(UnityEngine_CoreModule::UnityEngine::Vector4 a, float d);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator*(float d, UnityEngine_CoreModule::UnityEngine::Vector4 a);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator/(UnityEngine_CoreModule::UnityEngine::Vector4 a, float d);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Vector4& lhs, UnityEngine_CoreModule::UnityEngine::Vector4& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Vector4& lhs, UnityEngine_CoreModule::UnityEngine::Vector4& rhs);
}

