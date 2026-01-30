#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct IBaseKeyframe; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Funly_SkyStudio_InterpolationCurve.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BaseKeyframe; };
#include "Funly_SkyStudio_InterpolationDirection.h"

namespace Assembly_CSharp::Funly::SkyStudio
{
	template <typename T> struct KeyframeGroup_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "KeyframeGroup`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Collections::Generic::List_1<T>* keyframes;
		mscorlib::System::String* m_Name;
		mscorlib::System::String* m_Id;
		mscorlib::System::String* get_name()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		void set_name(mscorlib::System::String* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::String* get_id()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_id");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
		void set_id(mscorlib::System::String* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_id", std::vector<std::string> { "System.String" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddKeyFrame(T* keyFrame)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKeyFrame", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)keyFrame;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void RemoveKeyFrame(T* keyFrame)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveKeyFrame", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)keyFrame;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void RemoveKeyFrame(Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe* keyframe)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveKeyFrame", std::vector<std::string> { "Funly.SkyStudio.IBaseKeyframe" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)keyframe;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		int32_t GetKeyFrameCount()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyFrameCount");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		T* GetKeyframe(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyframe", std::vector<std::string> { "System.Int32" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void SortKeyframes()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortKeyframes");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		float CurveAdjustedBlendingTime(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve curve, float t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CurveAdjustedBlendingTime", std::vector<std::string> { "Funly.SkyStudio.InterpolationCurve", "System.Single" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&curve;
			params[1] = (intptr_t)&t;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		T* GetPreviousKeyFrame(float time)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreviousKeyFrame", std::vector<std::string> { "System.Single" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&time;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		bool GetSurroundingKeyFrames(float time, T& beforeKeyframe, T& afterKeyframe)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSurroundingKeyFrames", std::vector<std::string> { "System.Single", GetGenericTypeName<T>() + (std::string)"&", GetGenericTypeName<T>() + (std::string)"&" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&time;
			params[1] = (intptr_t)&beforeKeyframe;
			params[2] = (intptr_t)&afterKeyframe;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool GetSurroundingKeyFrames(float time, int32_t& beforeIndex, int32_t& afterIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSurroundingKeyFrames", std::vector<std::string> { "System.Single", "System.Int32&", "System.Int32&" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&time;
			params[1] = (intptr_t)&beforeIndex;
			params[2] = (intptr_t)&afterIndex;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		static float ProgressBetweenSurroundingKeyframes(float time, Assembly_CSharp::Funly::SkyStudio::BaseKeyframe* beforeKey, Assembly_CSharp::Funly::SkyStudio::BaseKeyframe* afterKey)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProgressBetweenSurroundingKeyframes", std::vector<std::string> { "System.Single", "Funly.SkyStudio.BaseKeyframe", "Funly.SkyStudio.BaseKeyframe" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&time;
			params[1] = (intptr_t)beforeKey;
			params[2] = (intptr_t)afterKey;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		static float ProgressBetweenSurroundingKeyframes(float time, float beforeKeyTime, float afterKeyTime)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProgressBetweenSurroundingKeyframes", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&time;
			params[1] = (intptr_t)&beforeKeyTime;
			params[2] = (intptr_t)&afterKeyTime;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		static float WidthBetweenCircularValues(float begin, float end)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WidthBetweenCircularValues", std::vector<std::string> { "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&begin;
			params[1] = (intptr_t)&end;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		void TrimToSingleKeyframe()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrimToSingleKeyframe");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		Assembly_CSharp::Funly::SkyStudio::InterpolationDirection GetShortestInterpolationDirection(float previousKeyValue, float nextKeyValue, float minValue, float maxValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShortestInterpolationDirection", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&previousKeyValue;
			params[1] = (intptr_t)&nextKeyValue;
			params[2] = (intptr_t)&minValue;
			params[3] = (intptr_t)&maxValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Assembly_CSharp::Funly::SkyStudio::InterpolationDirection ret;
				std::memset(&ret, 0, sizeof(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection));
				return ret;
			}
			return static_cast<Assembly_CSharp::Funly::SkyStudio::InterpolationDirection>(*(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection*)il2cpp_object_unbox(returnValue));
		}
		void CalculateCircularDistances(float previousKeyValue, float nextKeyValue, float minValue, float maxValue, float& forwardDistance, float& reverseDistance)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateCircularDistances", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single", "System.Single&", "System.Single&" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&previousKeyValue;
			params[1] = (intptr_t)&nextKeyValue;
			params[2] = (intptr_t)&minValue;
			params[3] = (intptr_t)&maxValue;
			params[4] = (intptr_t)&forwardDistance;
			params[5] = (intptr_t)&reverseDistance;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		float InterpolateFloat(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve curve, Assembly_CSharp::Funly::SkyStudio::InterpolationDirection direction, float time, float beforeTime, float nextTime, float previousKeyValue, float nextKeyValue, float minValue, float maxValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InterpolateFloat", std::vector<std::string> { "Funly.SkyStudio.InterpolationCurve", "Funly.SkyStudio.InterpolationDirection", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[9];
			params[0] = (intptr_t)&curve;
			params[1] = (intptr_t)&direction;
			params[2] = (intptr_t)&time;
			params[3] = (intptr_t)&beforeTime;
			params[4] = (intptr_t)&nextTime;
			params[5] = (intptr_t)&previousKeyValue;
			params[6] = (intptr_t)&nextKeyValue;
			params[7] = (intptr_t)&minValue;
			params[8] = (intptr_t)&maxValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		float AutoInterpolation(float curvedTime, float previousValue, float nextValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AutoInterpolation", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&curvedTime;
			params[1] = (intptr_t)&previousValue;
			params[2] = (intptr_t)&nextValue;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		float ForwardInterpolation(float time, float previousKeyValue, float nextKeyValue, float minValue, float maxValue, float distance)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForwardInterpolation", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&time;
			params[1] = (intptr_t)&previousKeyValue;
			params[2] = (intptr_t)&nextKeyValue;
			params[3] = (intptr_t)&minValue;
			params[4] = (intptr_t)&maxValue;
			params[5] = (intptr_t)&distance;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
		float ReverseInterpolation(float time, float previousKeyValue, float nextKeyValue, float minValue, float maxValue, float distance)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReverseInterpolation", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&time;
			params[1] = (intptr_t)&previousKeyValue;
			params[2] = (intptr_t)&nextKeyValue;
			params[3] = (intptr_t)&minValue;
			params[4] = (intptr_t)&maxValue;
			params[5] = (intptr_t)&distance;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				float ret;
				std::memset(&ret, 0, sizeof(float));
				return ret;
			}
			return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
		}
	};
}

