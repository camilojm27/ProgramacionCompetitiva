while True:
    entrada = input()
    H, U, D, F = entrada.split(' ')
    H, U, D, F = int(H), int(U), int(D), int(F)
    if H > 0:

        day, initHeight, distanceClimbed, heightAftClimb, heightAftSliding = 1, 0, U, 0, 0
        while True:
            heightAftClimb = distanceClimbed + initHeight
            heightAftSliding = heightAftClimb - D

            if heightAftClimb >= H and heightAftSliding != 0:
                print("success on day %d" % day)
                break
            elif heightAftSliding < 0:
                print("failure on day %d" % day)
                break


            day += 1
            initHeight = heightAftSliding
            distanceClimbed = (1 - (F/100)) * distanceClimbed

        pass
    if H == 0:
        break
