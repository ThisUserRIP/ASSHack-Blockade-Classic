#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct Float2x
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float a;
		float b;
		float get_Item(int32_t index);
		void set_Item(int32_t index, float value);
		void _ctor(float a, float b);
		Rewired_Core::Rewired::Utils::Classes::Data::Float2x Clone();
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x Clone(Rewired_Core::Rewired::Utils::Classes::Data::Float2x obj);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x get_Zero();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		bool Equals(Rewired_Core::Rewired::Utils::Classes::Data::Float2x other);
		mscorlib::System::String* ToString();
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x Add(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x Subtract(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x Divide(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x>* GetAdditionDelegate();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x>* GetSubtractionDelegate();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x>* GetMultiplicationDelegate();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x, Rewired_Core::Rewired::Utils::Classes::Data::Float2x>* GetDivisionDelegate();
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector2 obj);
		static UnityEngine_CoreModule::UnityEngine::Vector2 op_Implicit(Rewired_Core::Rewired::Utils::Classes::Data::Float2x obj);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Division(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::Float2x op_Division(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
	};
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator+(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator-(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator*(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator/(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float2x value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator+(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator-(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator*(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
	Rewired_Core::Rewired::Utils::Classes::Data::Float2x operator/(Rewired_Core::Rewired::Utils::Classes::Data::Float2x value1, float value2);
}

