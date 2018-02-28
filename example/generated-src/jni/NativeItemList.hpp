// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#ifndef DJINNI_GENERATED_NATIVEITEMLIST_HPP_JNI_
#define DJINNI_GENERATED_NATIVEITEMLIST_HPP_JNI_

#include "djinni_support.hpp"
#include "item_list.hpp"

namespace djinni_generated {

class NativeItemList final {
public:
    using CppType = ::textsort::ItemList;
    using JniType = jobject;

    using Boxed = NativeItemList;

    ~NativeItemList();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeItemList();
    friend ::djinni::JniClass<NativeItemList>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/textsort/ItemList") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;)V") };
    const jfieldID field_mItems { ::djinni::jniGetFieldID(clazz.get(), "mItems", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_NATIVEITEMLIST_HPP_JNI_
