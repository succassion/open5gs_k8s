# Open5GS Kubernetes

### Namespace
: open5gs-k8s
```
$ kubectl apply -f 00_namespace.yaml
$ kubectl get ns

$ kubectl delete -f 00_namespace.yaml
```

### Mongodb
: Subscriber Data
```
Address - 127.0.0.1
```

### MME (4G/5G NSA Core)
: Mobility Management Entity.
```
Address - s1ap = 127.0.0.2 :36412 for S1-MME
        - gtpc = 127.0.0.2 :2123  for S11
        - frDi = 127.0.0.2 :3868  for S6a
```

### SGWC (4G/5G NSA Core)
: Serving Gateway Control Plane.
```
Address - gtpc = 127.0.0.3 :2123 for S11
        - pfcp = 127.0.0.3 :8805 for Sxa
```

### SMF (4G/5G NSA Core, 5G SA Core)
- PGWC(Packet Gateway Control Plane) component contained in Open5GS SMF
: Session Management Function.
```
Address - gtpc = 127.0.0.4 :2123 for S5c, N11
          gtpu = 127.0.0.4 :2152 for N4u (Sxu)
          pfcp = 127.0.0.4 :8805 for N4 (Sxb)
          frDi = 127.0.0.4 :3868 for Gx auth
          sbi  = 127.0.0.4 :7777 for 5G SBI (N7,N10,N11)
```

### AMF (5G SA Core)
: Access and Mobility Management Function.
```
Address - ngap = 127.0.0.5 :38412 for N2
          sbi  = 127.0.0.5 :7777 for 5G SBI (N8,N12,N11)
```

### SGWU (4G/5G NSA Core)
: Serving Gateway User Plane.
```
Address - pfcp = 127.0.0.6 :8805 for Sxa
          gtpu = 127.0.0.6 :2152 for S1-U, S5u
```

### UPF (4G/5G NSA Core, 5G SA Core)
- PGWU(Packet Gateway User Plane) component contained in Open5GS UPF
: User Plane Function.
```
Address - pfcp = 127.0.0.7 :8805 for N4 (Sxb)
          gtpu = 127.0.0.7 :2152 for S5u, N3, N4u (Sxu)
```

### HSS (4G/5G NSA Core)
: Home Subscriber Server.
```
Address - frDi = 127.0.0.8 :3868 for S6a, Cx
```

### PCRF (4G/5G NSA Core)
: Policy and Charging Rules Function.
```
Address - frDi = 127.0.0.9 :3868 for Gx
```

### NRF (5G SA Core)
: NF Repository Function.
```
Address - sbi  = 127.0.0.10:7777 for 5G SBI
```

### AUSF (5G SA Core)
: Authentication Server Function.
```
Address - sbi = 127.0.0.11:7777 for 5G SBI
```

### UDM (5G SA Core)
: Unified Data Management.
```
Address - sbi = 127.0.0.12:7777 for 5G SBI
```

### PCF (5G SA Core)
: Policy and Charging Function.
```
Address - sbi = 127.0.0.13:7777 for 5G SBI
```

### NSSF (5G SA Core)
: Network Slice Selection Function.
```
Address - sbi = 127.0.0.14:7777 for 5G SBI
```

### BSF (5G SA Core)
: Binding Support Function.
```
Address - sbi = 127.0.0.15:7777 for 5G SBI
```

### UDR (5G SA Core)
: Unified Data Repository.
```
Address - sbi = 127.0.0.20:7777 for 5G SBI
```

### WebUI
: ID/PW - admin/1423
```
http://localhost:3000
```
