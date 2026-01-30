#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_FrustumPlanes.h"
namespace UnityEngine_CoreModule::UnityEngine { struct FrustumPlanes; };
#include "UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Matrix4x4
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m00;
		float m10;
		float m20;
		float m30;
		float m01;
		float m11;
		float m21;
		float m31;
		float m02;
		float m12;
		float m22;
		float m32;
		float m03;
		float m13;
		float m23;
		float m33;
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLossyScale();
		UnityEngine_CoreModule::UnityEngine::FrustumPlanes DecomposeProjection();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_lossyScale();
		UnityEngine_CoreModule::UnityEngine::FrustumPlanes get_decomposeProjection();
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 TRS(UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Quaternion q, UnityEngine_CoreModule::UnityEngine::Vector3 s);
		void SetTRS(UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Quaternion q, UnityEngine_CoreModule::UnityEngine::Vector3 s);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 Inverse(UnityEngine_CoreModule::UnityEngine::Matrix4x4 m);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_inverse();
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 Perspective(float fov, float aspect, float zNear, float zFar);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector4 column0, UnityEngine_CoreModule::UnityEngine::Vector4 column1, UnityEngine_CoreModule::UnityEngine::Vector4 column2, UnityEngine_CoreModule::UnityEngine::Vector4 column3);
		void set_Item(int32_t row, int32_t column, float value);
		float get_Item(int32_t index);
		void set_Item(int32_t index, float value);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Matrix4x4 other);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 op_Multiply(UnityEngine_CoreModule::UnityEngine::Matrix4x4 lhs, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Matrix4x4 lhs, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Matrix4x4 lhs, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetColumn(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Vector4 GetRow(int32_t index);
		void SetColumn(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector4 column);
		void SetRow(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector4 row);
		UnityEngine_CoreModule::UnityEngine::Vector3 MultiplyPoint(UnityEngine_CoreModule::UnityEngine::Vector3 point);
		UnityEngine_CoreModule::UnityEngine::Vector3 MultiplyPoint3x4(UnityEngine_CoreModule::UnityEngine::Vector3 point);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 Scale(UnityEngine_CoreModule::UnityEngine::Vector3 vector);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_zero();
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_identity();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static void _cctor();
		static void GetLossyScale_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& _unity_self, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void DecomposeProjection_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& _unity_self, UnityEngine_CoreModule::UnityEngine::FrustumPlanes& ret);
		static void TRS_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& pos, UnityEngine_CoreModule::UnityEngine::Quaternion& q, UnityEngine_CoreModule::UnityEngine::Vector3& s, UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		static void Inverse_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& m, UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		static void Perspective_Injected(float fov, float aspect, float zNear, float zFar, UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
	};
	UnityEngine_CoreModule::UnityEngine::Matrix4x4 operator*(UnityEngine_CoreModule::UnityEngine::Matrix4x4 lhs, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Matrix4x4& lhs, UnityEngine_CoreModule::UnityEngine::Matrix4x4& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Matrix4x4& lhs, UnityEngine_CoreModule::UnityEngine::Matrix4x4& rhs);
}

