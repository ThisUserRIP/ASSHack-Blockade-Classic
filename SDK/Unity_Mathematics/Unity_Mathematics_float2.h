#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Unity_Mathematics::Unity::Mathematics
{
	struct float2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		void _ctor(float x, float y);
		static Unity_Mathematics::Unity::Mathematics::float2 op_Multiply(Unity_Mathematics::Unity::Mathematics::float2 lhs, Unity_Mathematics::Unity::Mathematics::float2 rhs);
		static Unity_Mathematics::Unity::Mathematics::float2 op_Multiply(Unity_Mathematics::Unity::Mathematics::float2 lhs, float rhs);
		static Unity_Mathematics::Unity::Mathematics::float2 op_Subtraction(Unity_Mathematics::Unity::Mathematics::float2 lhs, Unity_Mathematics::Unity::Mathematics::float2 rhs);
		bool Equals(Unity_Mathematics::Unity::Mathematics::float2 rhs);
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static Unity_Mathematics::Unity::Mathematics::float2 op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector2 v);
	};
	Unity_Mathematics::Unity::Mathematics::float2 operator*(Unity_Mathematics::Unity::Mathematics::float2 lhs, Unity_Mathematics::Unity::Mathematics::float2 rhs);
	Unity_Mathematics::Unity::Mathematics::float2 operator*(Unity_Mathematics::Unity::Mathematics::float2 lhs, float rhs);
	Unity_Mathematics::Unity::Mathematics::float2 operator-(Unity_Mathematics::Unity::Mathematics::float2 lhs, Unity_Mathematics::Unity::Mathematics::float2 rhs);
}

